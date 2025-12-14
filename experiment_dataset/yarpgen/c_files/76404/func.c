/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76404
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
    var_11 = ((/* implicit */_Bool) 9650082354138441432ULL);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (short)9728))));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 - 2]))))), (((min((var_6), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)251)), (arr_5 [i_1 + 3])))))))))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) > ((+(((/* implicit */int) var_4))))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-9709))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (var_0)))))))));
                                arr_20 [i_4] [i_3] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_4 + 1] [i_4 - 3] [i_4]))))) < (((/* implicit */int) ((short) ((((/* implicit */int) arr_14 [i_4] [i_6])) > (arr_11 [i_5] [i_5])))))));
                                var_17 ^= ((/* implicit */unsigned short) max((((var_9) + (((/* implicit */int) arr_17 [i_4 - 1] [i_4] [i_4] [(_Bool)1] [i_3])))), ((+(((/* implicit */int) arr_17 [i_4 + 1] [i_4] [8U] [i_4] [i_2]))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((max((arr_18 [i_5] [i_5] [i_4 - 1] [13U] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_5)) - (18448)))))))))));
                                var_19 = ((/* implicit */int) arr_9 [(_Bool)1] [i_3]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) (short)9338));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned char) var_9);
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 4] [i_3])) || (((/* implicit */_Bool) arr_25 [i_8 - 4] [i_8 - 4] [i_8] [i_8 + 1] [i_8])))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_2]))) - (5U))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)1), ((unsigned char)105)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)9344)) ? (1859681845U) : (((/* implicit */unsigned int) 599636442))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1859681845U)) : (var_10))))) : (((/* implicit */long long int) var_3)))))));
                        }
                    } 
                } 
                arr_27 [12U] [i_3] [15] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_18 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3])), (((/* implicit */unsigned long long int) max((arr_7 [i_2]), (((/* implicit */long long int) arr_9 [i_2] [i_3])))))));
                var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-24125))));
                arr_28 [i_3] = max((var_6), (((/* implicit */unsigned long long int) (~(max((arr_22 [1] [i_2]), (((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
