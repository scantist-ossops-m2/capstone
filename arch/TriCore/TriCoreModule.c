/* Capstone Disassembly Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2014 */

#ifdef CAPSTONE_HAS_TRICORE

#include "../../utils.h"
#include "TriCoreDisassembler.h"
#include "TriCoreInstPrinter.h"
#include "TriCoreMapping.h"

cs_err TRICORE_global_init(cs_struct *ud)
{
	MCRegisterInfo *mri;

	mri = cs_mem_malloc(sizeof(*mri));

	TriCore_init(mri);
	ud->printer = TriCore_printInst;
	ud->printer_info = mri;
	ud->getinsn_info = mri;
	ud->disasm = TriCore_getInstruction;
	ud->post_printer = TriCore_post_printer;

	ud->reg_name = TriCore_getRegisterName;
	ud->insn_id = TriCore_get_insn_id;
	ud->insn_name = TriCore_insn_name;
	ud->group_name = TriCore_group_name;

	return CS_ERR_OK;
}

cs_err TRICORE_option(cs_struct *handle, cs_opt_type type, size_t value)
{
	if (type == CS_OPT_SYNTAX)
		handle->syntax = (int) value;

	return CS_ERR_OK;
}

#endif
