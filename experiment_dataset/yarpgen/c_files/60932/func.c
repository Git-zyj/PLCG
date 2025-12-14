/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60932
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
    var_19 = var_10;
    var_20 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((unsigned char) ((_Bool) ((unsigned long long int) (signed char)-32)));
                                var_22 ^= ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) (unsigned short)39868)), (arr_8 [i_4 - 2] [i_3 - 1] [(signed char)12] [i_3 + 1] [i_3 - 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) var_10)))) ^ (((((/* implicit */_Bool) 137438429184ULL)) ? (((/* implicit */int) (unsigned short)25663)) : (((/* implicit */int) arr_5 [i_1] [i_0]))))));
                    arr_15 [i_1] = ((/* implicit */unsigned char) min((((int) arr_8 [i_0] [(signed char)5] [i_1] [(signed char)5] [i_1])), (((((/* implicit */_Bool) ((signed char) -2922417299676227571LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1152912708513824768LL)))))))));
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-68)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                    arr_16 [i_1] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) ((((/* implicit */long long int) arr_12 [(unsigned short)11] [i_1] [i_1] [i_2] [i_2])) < (-1152912708513824770LL))))))))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)69)) | (((/* implicit */int) (signed char)112))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 603000949)) ? (((/* implicit */int) arr_10 [i_0] [16U] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)39868))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0])))) == (((((/* implicit */_Bool) ((((/* implicit */int) (short)11168)) % (((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) arr_14 [i_0] [i_1] [16U] [0U] [i_1])) : (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [(signed char)2] [i_1] [i_1])))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_9))));
}
