/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79873
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
    var_14 = ((/* implicit */unsigned char) (short)22984);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) (short)22984)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (short)16382))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_16 = ((/* implicit */signed char) ((long long int) ((unsigned int) (short)2915)));
                    var_17 = min((((/* implicit */short) (_Bool)1)), ((short)-22985));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6036826236956877334ULL)) ? (((/* implicit */int) var_8)) : (-2784250)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)2915))))))))));
                        var_19 *= (short)(-32767 - 1);
                        var_20 += ((/* implicit */_Bool) ((signed char) (short)-19693));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_21 += ((/* implicit */unsigned short) 4294967291U);
                        arr_18 [i_0] [i_2] = ((/* implicit */unsigned int) var_5);
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) var_0)) : (0)));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_9))));
                        arr_24 [i_0 - 2] [i_1] [2] [i_1] [i_2] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)-2616)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))));
                        arr_25 [i_2] [(unsigned char)0] [i_2] = ((/* implicit */long long int) ((int) (short)(-32767 - 1)));
                    }
                    var_23 += ((/* implicit */unsigned long long int) (short)2616);
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_32 [i_2] = ((/* implicit */unsigned long long int) (short)-19693);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((short) -1419838590)))));
                            arr_33 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2594167136U)) ? (((unsigned long long int) (short)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_25 -= ((/* implicit */short) var_13);
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            arr_37 [i_0] [i_6] [i_2 + 4] [i_8] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_11)) > (((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)19692)))))) ? (((((/* implicit */_Bool) ((3703936207U) << (((3703936207U) - (3703936192U)))))) ? (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (12210327727169571554ULL))) : (((/* implicit */unsigned long long int) ((int) 171799935U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), (min((var_11), (var_9)))))))));
                            var_26 = ((/* implicit */short) max((var_26), (((short) ((((/* implicit */_Bool) var_3)) ? (4123167361U) : (var_3))))));
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_8] |= ((/* implicit */signed char) 1482604938);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            arr_41 [i_2] [i_1] [i_1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29556))) : (14007279593984708237ULL)));
                            var_27 = ((/* implicit */_Bool) (short)-19688);
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            var_28 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)19448)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))));
                            arr_45 [i_0] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (12U))));
                            var_29 = ((/* implicit */unsigned short) var_9);
                            var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) var_2))));
                        }
                        arr_46 [i_2] [(short)12] [i_1] [i_1] [i_1] [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (5737213381707910252ULL)))) ? (((var_8) ? (((/* implicit */int) (short)-31395)) : (((/* implicit */int) (short)8064)))) : (((/* implicit */int) ((_Bool) (signed char)-27)))));
                    }
                    for (short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                    {
                        arr_51 [i_0] [i_1] [i_2] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((long long int) var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-4270)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((signed char) (signed char)-48))) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) var_5))));
                        arr_52 [i_2] [i_1] = ((/* implicit */short) 17979794610138174402ULL);
                    }
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                    {
                        var_31 += ((/* implicit */int) ((unsigned short) var_4));
                        /* LoopSeq 1 */
                        for (short i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            arr_58 [i_2] [i_0] [i_1] [i_2] [i_2 + 4] [i_12] [i_13] = ((/* implicit */short) ((_Bool) var_10));
                            var_32 = ((/* implicit */unsigned int) ((long long int) var_2));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_11))));
                            var_34 -= ((/* implicit */short) (-((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)19687)) ? (((/* implicit */int) var_10)) : (var_4)))))));
                        }
                    }
                }
                arr_59 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
}
