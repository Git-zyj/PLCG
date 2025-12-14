/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78088
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
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((4181977603U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), ((~(9359934239233954657ULL)))));
                var_16 = ((/* implicit */_Bool) 9086809834475596959ULL);
                var_17 = ((/* implicit */unsigned short) (~(max((9086809834475596931ULL), (9359934239233954685ULL)))));
                var_18 |= ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (signed char)-60)), (((long long int) 9086809834475596931ULL)))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-60)) < (((/* implicit */int) (signed char)124))))), (var_12))) - (1ULL)))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 3; i_4 < 15; i_4 += 2) 
                            {
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14169))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)53)) != (((/* implicit */int) (unsigned short)32265))))) : ((((-(((/* implicit */int) var_1)))) | (((/* implicit */int) (unsigned short)39565))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] [i_2] = min((((/* implicit */unsigned long long int) min((1460070966U), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) | (var_12))));
                                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)115))));
                            }
                            var_21 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 1688849860263936LL)), (9359934239233954657ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)51366), (((/* implicit */unsigned short) (_Bool)1)))))) - (var_6))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(min((7626649530103242372LL), (((/* implicit */long long int) (unsigned short)14161)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
