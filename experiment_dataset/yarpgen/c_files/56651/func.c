/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56651
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((((4829608385523493402ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 + 1])))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) 4829608385523493402ULL)))))));
                arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) : (((((/* implicit */unsigned long long int) -5828176961895100555LL)) | (((13617135688186058214ULL) * (12054940161013471749ULL))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    arr_11 [i_1] [(_Bool)1] [i_2 - 1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4829608385523493387ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9116))) : (4193792U)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_3 + 1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) ((arr_1 [i_3 + 1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_16)) ? (arr_14 [i_0] [i_0] [15] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(arr_12 [i_0] [i_1] [i_1] [i_1] [(unsigned short)4])));
                                arr_18 [i_3] [i_1] [i_2] [i_3 - 2] [i_4] = (-(((((/* implicit */int) arr_4 [i_1] [i_2 + 1])) + (((/* implicit */int) var_5)))));
                                arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_2 [i_3 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_0 [i_1 + 1])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3 - 2] [i_1 - 2])) - (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [18U] [i_2 - 1]))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9122)) ? (((/* implicit */int) (short)-9126)) : (((/* implicit */int) (unsigned short)29512))))) : (4294967283U)))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_22 [i_1] [i_1] [16ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_12)) >> (((var_11) - (338163472619911226ULL))))) : (((/* implicit */int) arr_4 [i_1] [i_0]))))) || (((/* implicit */_Bool) var_14))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_31 [i_0] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((short) arr_7 [i_0] [16LL]))))));
                                arr_32 [i_7 + 2] [i_7 + 2] [(signed char)11] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_14 [i_7 + 4] [i_6 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (-(arr_14 [i_7 + 3] [i_6 + 1] [i_1 + 1] [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) arr_14 [i_7 + 2] [i_6 + 3] [i_1 - 2] [i_1 - 2] [i_1]))))));
                                arr_33 [i_6] [12] [i_1] = var_3;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) (short)-9133)))));
                    var_21 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_10)))))));
                }
                for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_23 &= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)63739)) ? (((/* implicit */unsigned long long int) -13LL)) : (18446744073709551615ULL))));
                                arr_44 [i_1] [6ULL] [i_8] [i_1 + 1] [i_1] = ((/* implicit */signed char) min((((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_8 + 1] [i_9] [i_10]))))), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_8 + 1] [i_10]))));
                                arr_45 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_8] [i_1] [12] [i_9] [i_9])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_9] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_9] [i_8 - 2] [i_10]))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_8] [i_9] [i_10])) : (arr_41 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        for (int i_12 = 2; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_50 [(short)15] [(short)15] [(short)15] [i_1] = ((((/* implicit */int) var_4)) | (((((/* implicit */int) arr_49 [i_1 - 1])) + (((/* implicit */int) arr_49 [i_1 - 2])))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_8 + 1] [(short)17]), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    arr_51 [i_0] [i_1] [i_8 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31018)) ? (((/* implicit */long long int) 1214943131)) : (4722486239536937842LL)))) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1 + 1] [i_8 - 2] [i_8 + 1])) : (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) arr_10 [i_0] [(signed char)4] [i_8]);
                                var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_21 [i_8] [i_14])), (arr_55 [i_14] [i_13] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0] [(unsigned short)0] [i_0] [i_8] [i_13] [i_14] [i_14])) ? (((/* implicit */int) arr_40 [i_0] [i_1] [(_Bool)1] [i_13] [i_14])) : (((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_1 + 1] [i_0])) ? (max((((/* implicit */long long int) var_2)), (arr_25 [i_13] [i_13] [(unsigned short)4] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18995)) ? (((/* implicit */int) (unsigned short)56612)) : (((/* implicit */int) (signed char)-93)))))));
                                arr_57 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1 - 1]);
                                var_27 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_52 [i_8 - 2] [i_1 - 2] [i_0] [i_13])) : (((/* implicit */int) arr_52 [i_8 + 1] [i_1 + 1] [i_8] [i_13])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) var_17)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (int i_17 = 3; i_17 < 22; i_17 += 4) 
            {
                {
                    arr_66 [i_16] [i_16] [i_15] = ((/* implicit */signed char) arr_60 [i_15]);
                    arr_67 [i_15] [i_15] [(unsigned short)12] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 2314853413418728583ULL))))), (((int) var_6))));
                    arr_68 [i_17] [i_17 - 1] [i_17 - 2] [i_17 - 2] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_18 = 3; i_18 < 20; i_18 += 4) 
    {
        for (short i_19 = 1; i_19 < 22; i_19 += 4) 
        {
            {
                arr_74 [i_18] = ((/* implicit */signed char) arr_58 [i_18]);
                arr_75 [i_18 + 2] [i_19] = ((/* implicit */unsigned short) var_14);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
    {
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                {
                    arr_84 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_59 [7U] [i_22]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_58 [i_21]))) : (max((arr_58 [i_22]), (((/* implicit */unsigned int) arr_46 [i_20] [i_20] [i_22] [i_22] [12U]))))))) ? (((((((/* implicit */unsigned long long int) 4290773485U)) >= (5122877567985185166ULL))) ? ((~(((/* implicit */int) arr_69 [i_22])))) : (((/* implicit */int) ((arr_35 [i_20] [i_21] [i_21] [i_20]) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) : ((-(((/* implicit */int) arr_43 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
                    arr_85 [i_20] [i_20] [i_22] = ((((/* implicit */int) arr_34 [i_20] [(_Bool)1] [i_20])) >> (((((/* implicit */int) var_8)) + (66))));
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        for (long long int i_24 = 0; i_24 < 10; i_24 += 2) 
                        {
                            {
                                arr_93 [i_20] [i_23] [i_20] [i_20] [i_20] [i_20] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4592482345735682284ULL)) ? (((((/* implicit */_Bool) 2314853413418728583ULL)) ? (((/* implicit */int) (unsigned short)1797)) : (((/* implicit */int) (unsigned short)30608)))) : (((((/* implicit */_Bool) 6391803912696079866ULL)) ? (((/* implicit */int) arr_87 [i_20] [i_23] [i_22] [i_23])) : (((/* implicit */int) (unsigned short)17991))))));
                                var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_56 [i_20] [i_23] [i_22])), (((((/* implicit */_Bool) arr_4 [i_23] [i_23])) ? (((/* implicit */int) arr_63 [i_20] [i_21])) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
