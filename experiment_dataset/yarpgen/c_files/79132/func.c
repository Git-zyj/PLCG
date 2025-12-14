/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79132
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min(((~(var_13))), (((/* implicit */long long int) ((((/* implicit */int) (short)15762)) != (((/* implicit */int) (unsigned short)0)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 772986181U)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 - 4])))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((short) arr_7 [i_2])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_14 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) >= (var_1)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_12))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((var_5) * (((/* implicit */int) (unsigned short)0))))) ? (-810009915466047725LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_4] [i_5])))))))));
                            var_19 = ((/* implicit */unsigned long long int) (short)15762);
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (short)-15763);
                    }
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-1647)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 4] [i_6 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (var_9)))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)95))))) & (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_6 - 1] [i_1])))))))));
                        arr_22 [i_0] [i_0] [i_6] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-1632)) ? (arr_3 [i_0 - 4]) : (var_11))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
                        var_21 = 13572197172277202659ULL;
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */long long int) (short)12454))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-1618)))) : ((~(((long long int) var_15))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_29 [i_0] [i_0] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31181))))) ? (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) 849200946)) : (13572197172277202664ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0 - 3] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) (unsigned char)36)) : (var_5))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 4874546901432348956ULL))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_0 - 4] [i_8 + 2] [i_8 + 3] [i_8 + 3]))) ? ((~(-5039666180992341379LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18301)) * (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8 + 3]))))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) (-((+(arr_27 [i_0 - 1] [i_0 - 2] [i_0 - 1])))));
    }
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
}
