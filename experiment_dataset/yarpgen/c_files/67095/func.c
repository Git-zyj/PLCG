/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67095
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) var_13);
        arr_2 [i_0] = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((-(var_3)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_15 -= ((/* implicit */short) ((_Bool) 745405746U));
                        arr_14 [i_0] [i_2] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1LL))));
                        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -3941532161902645979LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 4169240361U)) ? (262128U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29239)) ? (-1884396898578509572LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36298))))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46999)) - (((/* implicit */int) (_Bool)1))));
                    }
                    arr_15 [i_0 - 2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)33099)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) min(((unsigned short)34198), ((unsigned short)14537)))) ? ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (262731212U))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8100596460697618329LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4] [8LL] [i_4] [i_4] [8LL]))))) : (((/* implicit */int) arr_16 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_23 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((3536359792U), (((/* implicit */unsigned int) (_Bool)1)))))))), ((~(((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)24325)))), (((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_4] [i_4])), (var_10))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) ((_Bool) var_1)))))) ? (((((/* implicit */_Bool) var_13)) ? (3536359784U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                                arr_30 [i_8] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 2555731597U)) ? (125726934U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) (-(var_0)));
    var_24 -= ((/* implicit */unsigned int) (~((~(min((((/* implicit */unsigned long long int) (unsigned short)47024)), (var_13)))))));
}
