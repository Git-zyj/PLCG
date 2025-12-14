/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86315
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1 - 2] [(signed char)21] = ((/* implicit */signed char) ((9223372036854775806LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned short)8192))))))) : (min((max((((/* implicit */long long int) 17U)), (9223372036854775797LL))), (max((8471171829562673892LL), (((/* implicit */long long int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                arr_11 [i_3 - 1] [(signed char)3] [i_4] = ((/* implicit */int) max(((unsigned short)0), ((unsigned short)19867)));
                var_15 = ((/* implicit */signed char) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min(((unsigned char)1), (((/* implicit */unsigned char) (signed char)114))));
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (1641535669U)));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((3880319477U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))))))));
}
