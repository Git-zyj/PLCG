/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96200
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))));
                            var_18 = ((/* implicit */short) var_14);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 229519547)) >= (var_11)));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_15 [i_0] [(unsigned short)8] [i_0] [1ULL] [i_1] [(unsigned char)9] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (var_14)))) ? (((unsigned int) arr_8 [i_3] [i_3 + 1] [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                            var_20 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [i_1 + 1] [(short)18] [i_1] [(unsigned char)16] [i_1 - 1])) ? (229519540) : (((/* implicit */int) (short)30080)))), (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)207)))))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned char)36)) << (((((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_0] [i_1 + 1])) - (38983)))))))));
                        }
                        var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (((long long int) var_17))));
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_23 |= ((/* implicit */unsigned short) var_7);
                        arr_18 [(signed char)4] [i_1 + 1] [i_2] [i_6] [(signed char)8] = ((/* implicit */long long int) ((_Bool) min((-229519541), (((/* implicit */int) arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [(signed char)6])))));
                        arr_19 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -229519572)) ? (2850241245U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))) ? (229519540) : (((/* implicit */int) ((signed char) -229519541)))))) && (((_Bool) (!(((/* implicit */_Bool) (signed char)72)))))));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [(unsigned char)15] = ((/* implicit */_Bool) ((((((min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)0)))) + (2147483647))) + (2147483647))) >> ((-(((/* implicit */int) (_Bool)0))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_24 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_0)) - (10156))))) : (((/* implicit */int) var_13)))));
                        arr_23 [i_0] [i_0] [i_2] [i_7] = (~(((/* implicit */int) var_9)));
                    }
                    var_25 -= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (2002594180625335002LL))), (((/* implicit */long long int) (+(var_6))))));
                    var_26 &= ((/* implicit */signed char) 794144181U);
                    var_27 = ((/* implicit */short) -229519579);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)12074)), (10544707615853838622ULL)));
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_41 [(short)2] [i_9] [i_10] [i_8] [i_12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 5612757571664383319ULL)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)12074)) : (-889871874)))));
                                var_29 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_9 [i_9] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9]))))));
                                arr_42 [i_12] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */short) (unsigned char)253);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_3))));
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)2864)) / (((/* implicit */int) (unsigned short)12197))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3500823114U)))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
