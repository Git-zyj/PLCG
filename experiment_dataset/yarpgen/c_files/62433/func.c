/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62433
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) var_2);
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)0))))) : ((~(-9223372036854775798LL))))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2]) : (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned short)31898)) : (((/* implicit */int) arr_2 [i_0])))))));
                var_16 = ((/* implicit */unsigned int) (unsigned char)192);
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (8673366761396788187LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) var_8))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_0 - 1] [i_1] [i_0 + 2])))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_18 = ((/* implicit */int) ((min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (short)-12602)))) < (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (-1441188102900802714LL)))) + (((/* implicit */int) ((short) 457263496U)))))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) | (((/* implicit */int) (unsigned short)61988))))) ? (max((((/* implicit */int) (unsigned short)3547)), (2021819945))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) != (4ULL)))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) 1758467656);
                    var_21 &= ((/* implicit */unsigned int) min((-1975365547), (((/* implicit */int) (unsigned short)0))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    var_22 = var_10;
                    arr_18 [19] [i_0 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) var_1);
                    arr_19 [i_6] [i_6] [i_6] [i_6] [i_1] [i_0 + 2] = (~(arr_12 [i_0 + 1] [i_0 + 1]));
                }
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 4125437807U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1]))));
                var_24 = ((/* implicit */unsigned short) arr_11 [i_7] [12U]);
            }
            for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 21ULL)) && (((/* implicit */_Bool) (signed char)31)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) arr_24 [i_1] [14] [i_8 + 1] [i_8 - 1])))))));
                arr_25 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
            }
            arr_26 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((169529489U), (((/* implicit */unsigned int) (_Bool)1))))), (((unsigned long long int) arr_7 [i_0] [i_0 + 2]))));
        }
        var_26 = ((/* implicit */unsigned char) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)21338), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (13534089187110833907ULL))))))))));
        var_27 = ((/* implicit */signed char) 2107320582U);
        var_28 |= ((/* implicit */_Bool) ((var_3) ? (((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_17 [(_Bool)1] [i_0 - 1])))) : (((/* implicit */int) ((unsigned short) (unsigned char)241)))));
    }
    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned long long int) arr_11 [i_9 - 2] [i_9])) : (18446744073709551611ULL))), (((/* implicit */unsigned long long int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (arr_16 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]) : (((/* implicit */int) arr_24 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 1])))))));
        var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) max((arr_6 [i_9]), (((/* implicit */int) (_Bool)1))))) != ((~(((var_11) / (((/* implicit */long long int) ((/* implicit */int) (short)28976)))))))));
        var_31 = ((/* implicit */unsigned int) -153164093);
        var_32 = (short)-1010;
    }
    var_33 = (+(((((/* implicit */int) var_4)) | (((/* implicit */int) max(((short)31000), (((/* implicit */short) (signed char)67))))))));
    var_34 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551597ULL)) || (((/* implicit */_Bool) 7919073211927367608ULL)))))) < (((var_11) + (-854537031125255249LL)))))), (var_5)));
    var_35 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61990))))))))));
}
