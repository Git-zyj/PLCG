/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69178
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
    var_11 -= ((/* implicit */int) (-((+(((0U) >> (((2147483647) - (2147483623)))))))));
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_0 [i_1])), (var_10)))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((+(((/* implicit */int) ((264241152) != (var_5)))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2] [(unsigned char)5] [i_3])) < (32766)))) : ((((-2147483647 - 1)) % (((/* implicit */int) (unsigned char)121))))))), ((-(min((23U), (((/* implicit */unsigned int) (unsigned char)121))))))));
                            arr_11 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((int) (unsigned char)134));
                            arr_12 [1U] [1U] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */short) ((int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) || ((_Bool)1)))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-15560)))) : (0))));
                                var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)16384)), (32766U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))));
                                var_19 = (((_Bool)1) ? (((32782U) << (((((((/* implicit */_Bool) 14)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (4294967265U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
                                var_20 = max((((((/* implicit */int) ((((/* implicit */int) arr_15 [i_2])) < (12)))) * (((/* implicit */int) (unsigned char)129)))), ((+(arr_2 [i_3] [i_1]))));
                                arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])), (max((var_0), (((/* implicit */int) arr_15 [i_0]))))))) ? (((((/* implicit */_Bool) (+(-421045789)))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))))) : (1264128680));
                            }
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */int) (unsigned char)143);
                                arr_20 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)51)) ? ((-((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) (+(222813598)))) ? (((/* implicit */int) arr_15 [i_0])) : (((-722744271) / (((/* implicit */int) (unsigned char)57))))))));
                                arr_21 [i_0] = ((/* implicit */unsigned int) ((var_4) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                                var_22 = ((/* implicit */int) ((unsigned int) var_6));
                            }
                            var_23 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((47910845U) >> (((-421045796) + (421045807))))))), (arr_5 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 |= var_8;
}
