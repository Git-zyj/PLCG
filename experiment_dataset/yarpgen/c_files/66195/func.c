/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66195
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_2)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned int) (~(((long long int) var_3))));
                            var_22 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (0U)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_10 [6] [i_0] [i_2] [i_3]))))) & (((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3] [(_Bool)1] [i_3])) ? (((/* implicit */int) var_3)) : (arr_2 [i_0]))))));
                            arr_12 [i_0] [i_3] [8U] [i_3] [i_4] &= ((/* implicit */long long int) (((~(max((((/* implicit */int) arr_1 [i_0])), (1717438902))))) & ((~((~(((/* implicit */int) arr_8 [i_0] [(unsigned char)8] [i_0] [i_0]))))))));
                            var_23 = ((_Bool) ((((/* implicit */_Bool) -1717438903)) ? (((/* implicit */int) (_Bool)1)) : (1717438903)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [(unsigned short)17] [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_1] [i_3 + 1] [i_5])) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_1 + 3] [i_1] [i_3 + 3])) ? (((/* implicit */unsigned long long int) -1717438907)) : (((((/* implicit */_Bool) 4294967295U)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)6144)) - (6135))))))), (min((((((/* implicit */_Bool) 8213633529899146895LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) : (3301655174539618894LL))), (((/* implicit */long long int) ((int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_16 [1]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2747550300U)))) & (max((((/* implicit */unsigned int) (unsigned short)56409)), (var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_19 [i_6] [i_3] [i_2] [i_2] [12] [i_0])))))));
                            var_25 = ((/* implicit */unsigned int) var_14);
                        }
                    }
                    for (int i_7 = 2; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((unsigned char) max(((~(4294967295U))), (((/* implicit */unsigned int) var_19)))));
                        arr_25 [i_0] [i_0] [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) max(((_Bool)1), (((((/* implicit */_Bool) ((int) -1992606256))) || (((/* implicit */_Bool) var_19))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(((((_Bool) (signed char)-115)) ? (1717438903) : (((/* implicit */int) (short)-3717)))))))));
                        var_28 = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((-3301655174539618916LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) && (((/* implicit */_Bool) arr_1 [i_1 - 1]))))))))));
                    var_30 = ((/* implicit */unsigned char) ((unsigned long long int) 4294967285U));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned short) (unsigned char)1);
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)243)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (1717438903) : (((/* implicit */int) var_0))))))))))));
}
