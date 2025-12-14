/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82943
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) 2147483645)) ^ (((unsigned long long int) arr_0 [i_2 - 2]))))));
                    var_16 += min((((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))))) : (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) (unsigned short)45973)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */int) ((short) ((arr_1 [i_5 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1)))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_6 [(_Bool)1] [(unsigned char)4] [(unsigned char)4]))));
                }
            } 
        } 
        var_19 += ((/* implicit */unsigned char) max((arr_9 [i_3] [i_3]), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)51662))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (2328851954U))))))));
        arr_15 [i_3] [(_Bool)1] = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)150))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_3]))))));
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((long long int) 4294967295U)), ((+(arr_9 [i_6] [i_6]))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) == (arr_9 [i_6] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) arr_17 [13] [i_6])) ? (107458682675613241LL) : (var_12))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned int) (-(-1078689509)));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((unsigned char) (unsigned short)13857))))))))));
                        var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) max((arr_11 [i_7 + 3]), (arr_11 [i_7 - 1]))))))));
                    }
                } 
            } 
        } 
    }
}
