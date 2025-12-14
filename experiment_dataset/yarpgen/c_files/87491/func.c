/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87491
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
    var_19 ^= ((/* implicit */unsigned char) (-(max((((((/* implicit */int) var_10)) * (-504870806))), (((/* implicit */int) var_18))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (-1459894281)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (min((((/* implicit */int) (_Bool)1)), (992178210))) : (((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])) / (-1459894278)))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((_Bool) (-(var_13)))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 += var_16;
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_3 - 1] [i_3] [i_3 - 2]))))) > (var_5))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */int) (-(arr_13 [i_0] [i_5 - 1] [(_Bool)1] [i_5])));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(var_5))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_19 [i_6] = ((/* implicit */_Bool) -2128885298);
                    var_27 = ((/* implicit */unsigned char) max((var_27), (arr_6 [i_0])));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_28 = min((((/* implicit */int) ((((arr_13 [i_0] [i_0] [i_1] [(_Bool)1]) ^ (((/* implicit */unsigned int) var_14)))) <= (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), (-1459894281))))))), (((((((/* implicit */int) (unsigned char)161)) != (((/* implicit */int) (unsigned char)57)))) ? (((/* implicit */int) (_Bool)1)) : (-992178234))));
                    var_29 -= var_12;
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((-1459894287) ^ (((((/* implicit */_Bool) (~(20U)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_12 [i_0])))))))));
                }
                arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1])) != ((((!(var_0))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [(_Bool)1])) : (var_3)))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_9))));
    var_32 = ((/* implicit */int) ((unsigned char) var_2));
}
