/*
#  Copyright (c) 2011, 2012, 2013, 2014, 2015 by Lawrence Livermore National Security, LLC. LLNL-CODE-645430
#  Produced at the Lawrence Livermore National Laboratory.
#  Written by Marty McFadden, Kathleen Shoga and Barry Rountree (mcfadden1|shoga1|rountree@llnl.gov).
#  All rights reserved.
#
#  This file is part of msr-safe.
#
#  msr-safe is free software: you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free Software Foundation, either
#  version 3 of the License, or (at your option) any
#  later version.
#
#  msr-safe is distributed in the hope that it will be useful, but
#  WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
#  Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  License along
#  with msr-safe. If not, see <http://www.gnu.org/licenses/>.
#
#  This material is based upon work supported by the U.S. Department
#  of Energy's Lawrence Livermore National Laboratory. Office of
#  Science, under Award number DE-AC52-07NA27344.
*/
/* table_03_18.h */
#ifndef __TABLE_03_18_H
#define __TABLE_03_18_H
/* Table 35-19 : Intel Xeon Processor E5 v3 Product Family
 * (Based on Haswell-EP Microarchitecture)
 *
 * CPUID signature06_3FH
 *
 */
/*                          Low mask    high mask */
#define WL_TABLE_03_18 \
SMSR_ENTRY( SMSR_C0_MSR_PMON_CTR3,              0x0E0B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_CTR2,              0x0E0A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_CTR1,              0x0E09, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_CTR0,              0x0E08, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_STATUS,        0x0E07, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_FILTER1,       0x0E06, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_FILTER0,       0x0E05, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_CTL3,          0x0E04, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_CTL2,          0x0E03, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_CTL1,          0x0E02, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_CTL0,          0x0E01, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C0_MSR_PMON_BOX_CTL,           0x0E00, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C1_MSR_PMON_CTR3,              0x0E1B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_CTR2,              0x0E1A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_CTR1,              0x0E19, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_CTR0,              0x0E18, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_STATUS,        0x0E17, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_FILTER1,       0x0E16, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_FILTER0,       0x0E15, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_CTL3,          0x0E14, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_CTL2,          0x0E13, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_CTL1,          0x0E12, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_CTL0,          0x0E11, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C1_MSR_PMON_BOX_CTL,           0x0E10, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C2_MSR_PMON_CTR3,              0x0E2B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_CTR2,              0x0E2A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_CTR1,              0x0E29, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_CTR0,              0x0E28, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_STATUS,        0x0E27, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_FILTER1,       0x0E26, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_FILTER0,       0x0E25, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_CTL3,          0x0E24, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_CTL2,          0x0E23, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_CTL1,          0x0E22, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_CTL0,          0x0E21, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C2_MSR_PMON_BOX_CTL,           0x0E20, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C3_MSR_PMON_CTR3,              0x0E3B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_CTR2,              0x0E3A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_CTR1,              0x0E39, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_CTR0,              0x0E38, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_STATUS,        0x0E37, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_FILTER1,       0x0E36, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_FILTER0,       0x0E35, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_CTL3,          0x0E34, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_CTL2,          0x0E33, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_CTL1,          0x0E32, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_CTL0,          0x0E31, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C3_MSR_PMON_BOX_CTL,           0x0E30, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C4_MSR_PMON_CTR3,              0x0E4B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_CTR2,              0x0E4A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_CTR1,              0x0E49, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_CTR0,              0x0E48, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_STATUS,        0x0E47, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_FILTER1,       0x0E46, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_FILTER0,       0x0E45, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_CTL3,          0x0E44, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_CTL2,          0x0E43, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_CTL1,          0x0E42, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_CTL0,          0x0E41, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C4_MSR_PMON_BOX_CTL,           0x0E40, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C5_MSR_PMON_CTR3,              0x0E5B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_CTR2,              0x0E5A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_CTR1,              0x0E59, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_CTR0,              0x0E58, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_STATUS,        0x0E57, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_FILTER1,       0x0E56, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_FILTER0,       0x0E55, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_CTL3,          0x0E54, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_CTL2,          0x0E53, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_CTL1,          0x0E52, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_CTL0,          0x0E51, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C5_MSR_PMON_BOX_CTL,           0x0E50, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C6_MSR_PMON_CTR3,              0x0E6B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_CTR2,              0x0E6A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_CTR1,              0x0E69, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_CTR0,              0x0E68, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_STATUS,        0x0E67, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_FILTER1,       0x0E66, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_FILTER0,       0x0E65, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_CTL3,          0x0E64, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_CTL2,          0x0E63, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_CTL1,          0x0E62, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_CTL0,          0x0E61, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C6_MSR_PMON_BOX_CTL,           0x0E60, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C7_MSR_PMON_CTR3,              0x0E7B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_CTR2,              0x0E7A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_CTR1,              0x0E79, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_CTR0,              0x0E78, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_STATUS,        0x0E77, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_FILTER1,       0x0E76, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_FILTER0,       0x0E75, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_CTL3,          0x0E74, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_CTL2,          0x0E73, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_CTL1,          0x0E72, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_CTL0,          0x0E71, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C7_MSR_PMON_BOX_CTL,           0x0E70, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C8_MSR_PMON_CTR3,              0x0E8B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_CTR2,              0x0E8A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_CTR1,              0x0E89, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_CTR0,              0x0E88, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_STATUS,        0x0E87, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_FILTER1,       0x0E86, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_FILTER0,       0x0E85, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_CTL3,          0x0E84, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_CTL2,          0x0E83, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_CTL1,          0x0E82, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_CTL0,          0x0E81, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C8_MSR_PMON_BOX_CTL,           0x0E80, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C9_MSR_PMON_CTR3,              0x0E9B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_CTR2,              0x0E9A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_CTR1,              0x0E99, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_CTR0,              0x0E98, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_STATUS,        0x0E97, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_FILTER1,       0x0E96, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_FILTER0,       0x0E95, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_CTL3,          0x0E94, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_CTL2,          0x0E93, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_CTL1,          0x0E92, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_CTL0,          0x0E91, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C9_MSR_PMON_BOX_CTL,           0x0E90, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C10_MSR_PMON_CTR3,             0x0EAB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_CTR2,             0x0EAA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_CTR1,             0x0EA9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_CTR0,             0x0EA8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_STATUS,       0x0EA7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_FILTER1,      0x0EA6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_FILTER0,      0x0EA5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_CTL3,         0x0EA4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_CTL2,         0x0EA3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_CTL1,         0x0EA2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_CTL0,         0x0EA1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C10_MSR_PMON_BOX_CTL,          0x0EA0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C11_MSR_PMON_CTR3,             0x0EBB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_CTR2,             0x0EBA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_CTR1,             0x0EB9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_CTR0,             0x0EB8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_STATUS,       0x0EB7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_FILTER1,      0x0EB6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_FILTER0,      0x0EB5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_CTL3,         0x0EB4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_CTL2,         0x0EB3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_CTL1,         0x0EB2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_CTL0,         0x0EB1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C11_MSR_PMON_BOX_CTL,          0x0EB0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C12_MSR_PMON_CTR3,             0x0ECB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_CTR2,             0x0ECA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_CTR1,             0x0EC9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_CTR0,             0x0EC8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_STATUS,       0x0EC7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_FILTER1,      0x0EC6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_FILTER0,      0x0EC5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_CTL3,         0x0EC4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_CTL2,         0x0EC3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_CTL1,         0x0EC2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_CTL0,         0x0EC1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C12_MSR_PMON_BOX_CTL,          0x0EC0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C13_MSR_PMON_CTR3,             0x0EDB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_CTR2,             0x0EDA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_CTR1,             0x0ED9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_CTR0,             0x0ED8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_STATUS,       0x0ED7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_FILTER1,      0x0ED6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_FILTER0,      0x0ED5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_CTL3,         0x0ED4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_CTL2,         0x0ED3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_CTL1,         0x0ED2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_CTL0,         0x0ED1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C13_MSR_PMON_BOX_CTL,          0x0ED0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C14_MSR_PMON_CTR3,             0x0EEB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_CTR2,             0x0EEA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_CTR1,             0x0EE9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_CTR0,             0x0EE8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_STATUS,       0x0EE7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_FILTER1,      0x0EE6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_FILTER0,      0x0EE5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_CTL3,         0x0EE4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_CTL2,         0x0EE3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_CTL1,         0x0EE2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_CTL0,         0x0EE1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C14_MSR_PMON_BOX_CTL,          0x0EE0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C15_MSR_PMON_CTR3,             0x0EFB, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_CTR2,             0x0EFA, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_CTR1,             0x0EF9, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_CTR0,             0x0EF8, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_STATUS,       0x0EF7, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_FILTER1,      0x0EF6, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_FILTER0,      0x0EF5, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_CTL3,         0x0EF4, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_CTL2,         0x0EF3, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_CTL1,         0x0EF2, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_CTL0,         0x0EF1, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C15_MSR_PMON_BOX_CTL,          0x0EF0, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C16_MSR_PMON_CTR3,             0x0F0B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_CTR2,             0x0F0A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_CTR1,             0x0F09, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_CTR0,             0x0F08, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_STATUS,       0x0F07, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_FILTER1,      0x0F06, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_FILTER0,      0x0F05, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_CTL3,         0x0F04, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_CTL2,         0x0F03, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_CTL1,         0x0F02, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_CTL0,         0x0F01, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C16_MSR_PMON_BOX_CTL,          0x0F00, 0xFFFFFFFF, 0x0       ),\
\
SMSR_ENTRY( SMSR_C17_MSR_PMON_CTR3,             0x0F1B, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_CTR2,             0x0F1A, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_CTR1,             0x0F19, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_CTR0,             0x0F18, 0x0       , 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_STATUS,       0x0F17, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_FILTER1,      0x0F16, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_FILTER0,      0x0F15, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_CTL3,         0x0F14, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_CTL2,         0x0F13, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_CTL1,         0x0F12, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_CTL0,         0x0F11, 0xFFFFFFFF, 0x0       ),\
SMSR_ENTRY( SMSR_C17_MSR_PMON_BOX_CTL,          0x0F10, 0xFFFFFFFF, 0x0       ),

#endif /* __TABLE_03_18_H */
