/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94389
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6ULL]))) : (min((((/* implicit */unsigned int) max((var_9), (var_9)))), (max((424206032U), (((/* implicit */unsigned int) var_8)))))));
        var_13 = ((/* implicit */short) (~(((16394428931019748395ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_9)) | (var_3))), ((-(((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8528163389528761774LL)))))))));
                                arr_14 [(short)9] [i_3] [i_2] [i_2] [i_0] [i_0] = max(((~(4294967276U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_4 - 3] [i_3 + 2] [i_2 - 3]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) 8528163389528761765LL)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) (unsigned short)7851)))), (((/* implicit */int) (!((_Bool)1)))))) & ((~((+(((/* implicit */int) (_Bool)1))))))));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) -892333802);
        var_15 = ((/* implicit */unsigned char) arr_7 [i_5]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_1 [9LL])))))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) % (arr_3 [i_5])))));
        var_17 = ((/* implicit */int) max((var_17), (var_6)));
    }
    var_18 = ((/* implicit */int) (~(var_5)));
    var_19 = ((/* implicit */int) var_8);
    var_20 = (+(((unsigned long long int) (unsigned short)440)));
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
}
