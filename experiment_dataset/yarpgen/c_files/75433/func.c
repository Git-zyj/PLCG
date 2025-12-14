/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75433
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
    var_10 = ((/* implicit */int) ((_Bool) ((var_1) ^ (((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((arr_6 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]) && (((/* implicit */_Bool) (+(min((arr_5 [i_0] [i_1] [i_2] [i_3 + 1]), (((/* implicit */unsigned int) var_1)))))))));
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [i_3] &= ((/* implicit */long long int) (-(max((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(((/* implicit */int) var_8))))))));
                            arr_10 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) & ((~(((/* implicit */int) var_6))))))), (max((min((2813110721614149256ULL), (17557826306048ULL))), (var_9)))));
                        }
                    } 
                } 
                var_12 *= ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0] [i_1])) : (arr_3 [i_0]))))));
                var_13 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
                var_14 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((+(((/* implicit */int) var_2)))) : (var_7))), (min(((-(((/* implicit */int) arr_2 [i_0] [i_0] [(_Bool)1])))), (((/* implicit */int) var_4))))));
                arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) ((short) var_4))), (((unsigned short) var_7)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [(signed char)9] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
                    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((long long int) var_3))) % (((15633633352095402362ULL) - (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) | (((/* implicit */int) arr_16 [i_4]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_26 [i_4] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */int) ((unsigned int) arr_21 [i_4] [i_4] [i_4] [i_4] [(_Bool)1]));
                                arr_27 [i_4] [i_4] [i_6] [i_4] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) > ((+(15633633352095402375ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
