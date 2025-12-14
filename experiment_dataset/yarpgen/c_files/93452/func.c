/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93452
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
    var_12 = ((/* implicit */signed char) ((unsigned long long int) var_3));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [1] [i_1] [i_2] [i_3] = ((/* implicit */int) (signed char)89);
                            var_13 = (signed char)22;
                            var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (signed char)89)), (2145068020))), (arr_8 [(signed char)1] [i_0] [i_2] [i_3])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (min((arr_5 [10U]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-96), ((signed char)-27)))))))));
                        }
                    } 
                } 
                arr_13 [0U] [0U] = ((/* implicit */int) 10397226363983176324ULL);
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2116080757622348753ULL)) ? (1684647596) : (((/* implicit */int) (signed char)-27))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (arr_2 [i_0] [i_1])))), (18446744073709551615ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(var_5))))));
}
