/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8800
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
    var_13 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) 1694991058U))) >= (((/* implicit */int) ((_Bool) var_11)))))) : (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] = ((/* implicit */int) 15863750952928778546ULL);
                        var_15 = ((/* implicit */unsigned short) (~(((1694991048U) * (1694991058U)))));
                    }
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0 + 2] [i_0])))))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_15 [i_5]))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
                        }
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_18 |= ((/* implicit */_Bool) ((short) (unsigned char)0));
                            var_19 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_2])) && (((/* implicit */_Bool) 1694991048U))))) ? ((~(((arr_13 [i_1] [i_4 - 1] [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_1))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) + (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (unsigned short)27403))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / ((~(1694991031U))))))));
                            var_21 = max(((((_Bool)1) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) arr_8 [i_7] [i_4] [i_1] [5U])));
                        }
                        var_22 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((1694991025U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 954665470U))))) <= (((((/* implicit */_Bool) -2066254104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_4 - 1])) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [(_Bool)1] [i_4 - 1])))))) : ((~(((/* implicit */int) (!((_Bool)0))))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 2582993120780773069ULL))));
                        arr_25 [i_1] = ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14270))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_8] [i_1]))))) ? (((arr_19 [i_8] [(_Bool)1] [13U] [i_1] [i_8] [i_2] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_9)))))))));
                        var_26 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (+(var_7)))))));
                    }
                    arr_28 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64466)) ? (-1308746607582811941LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14544)))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-443)) != (((((/* implicit */_Bool) 2582993120780773070ULL)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) arr_23 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0]))))))) : (((/* implicit */int) arr_14 [1LL] [i_1] [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
