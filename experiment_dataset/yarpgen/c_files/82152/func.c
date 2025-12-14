/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82152
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) arr_1 [i_0])));
        var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)43695), (arr_2 [i_0]))))) % (-2390747153687625057LL)));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((long long int) (signed char)-14))) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (unsigned char)231))), ((~(((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_0]))))))));
                    arr_12 [i_0] [i_1] [16] [i_2] = ((((/* implicit */_Bool) ((unsigned int) min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)0)))))) ? ((~(((790733768U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 + 1]))))));
                    var_13 = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)57323)) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), (min((((/* implicit */int) ((unsigned char) arr_7 [i_0] [(unsigned char)3] [(unsigned char)3]))), (211658826)))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) == (((((/* implicit */int) (unsigned short)8213)) * (((/* implicit */int) (_Bool)1))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_4] [i_2 + 1] [i_0] [i_4] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_13 [i_3])))), (min((arr_13 [i_3]), (((/* implicit */int) ((_Bool) 1632797273)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)64)))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8213))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        arr_24 [i_5] = ((/* implicit */long long int) arr_8 [i_5 + 1] [i_5 - 1] [i_5 + 1]);
    }
    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)0)), (3U)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) var_11)) ? (6664678061472792288LL) : (6664678061472792306LL)))))));
    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((4193686598U), (((/* implicit */unsigned int) (unsigned char)33))))) ? (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-2071507700) < (((/* implicit */int) (unsigned char)117)))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_2)))), ((+(((/* implicit */int) (unsigned char)14)))))))));
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)11436)))))) ? ((-(((((/* implicit */int) var_0)) / (448252318))))) : ((~(((((/* implicit */int) (unsigned short)11436)) & (((/* implicit */int) (signed char)127))))))));
}
