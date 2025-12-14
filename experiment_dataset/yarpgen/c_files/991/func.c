/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/991
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) ^ ((~(((/* implicit */int) (short)9149))))));
                var_13 = (i_1 % 2 == zero) ? (((/* implicit */signed char) (+(((((((/* implicit */int) arr_4 [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) var_2)) - (13669)))))))) : (((/* implicit */signed char) (+(((((((((/* implicit */int) arr_4 [i_0] [i_1])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) var_2)) - (13669))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_11 [i_3])))) & (((/* implicit */int) ((((/* implicit */_Bool) 1574553197252679398LL)) && (((/* implicit */_Bool) arr_12 [i_2] [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~((((~(537751029))) ^ (((/* implicit */int) var_3))))));
                                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)169)) | (((/* implicit */int) var_11))))));
                                arr_20 [i_6 - 1] [i_2] [i_4] [i_2] [i_2] = (((+(((/* implicit */int) arr_17 [i_4] [i_6 - 1] [i_6] [i_2] [i_6] [i_6 + 1])))) / ((-(((/* implicit */int) (unsigned short)2047)))));
                                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_6 - 1] [i_2] [i_2] [i_2])) == (-383510158))))) & (((arr_19 [i_2] [i_3] [i_4] [i_5] [i_4] [(unsigned short)13]) >> (((((/* implicit */int) var_9)) - (48174)))))));
                                var_18 = ((/* implicit */signed char) (~((-((~(-383510143)))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)41)) && (((/* implicit */_Bool) (unsigned short)26681)))))));
                    var_19 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_12 [i_3] [i_2])) == (((/* implicit */int) arr_12 [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
