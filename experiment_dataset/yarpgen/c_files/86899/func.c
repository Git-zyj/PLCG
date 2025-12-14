/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86899
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
    var_13 |= ((/* implicit */short) var_3);
    var_14 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-21065))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-21039)) > (((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-21065)))))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) - (-3670503702204253285LL)))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_3 [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((((((/* implicit */int) (short)21064)) & (((/* implicit */int) (short)-21060)))), (((/* implicit */int) min(((short)21064), (((/* implicit */short) (unsigned char)167)))))));
                            var_17 = min(((((-(var_7))) / (min((var_11), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) arr_8 [i_1] [i_1])));
                        }
                    } 
                } 
                arr_10 [i_1] = ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 3]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) (-(arr_0 [i_4])));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) & (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [(unsigned short)14]))) : (var_11)))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) var_6);
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_4])) / (((/* implicit */int) arr_6 [i_5] [i_6]))))) ? (((/* implicit */int) arr_3 [i_5])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-21049))))));
                    arr_19 [i_5] = ((/* implicit */unsigned char) (short)-21065);
                    var_21 |= ((/* implicit */unsigned char) (short)21049);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_1 [i_7] [i_7])))))));
        arr_23 [i_7] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) (unsigned short)40923)))) + (((/* implicit */int) ((unsigned short) arr_9 [i_7] [(unsigned char)8])))))));
    }
}
