/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84509
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) var_13);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (var_14)))) - (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) / (11337468100500962847ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) / (var_1))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) -2487062749787896702LL))))) ? (min((((/* implicit */unsigned long long int) var_2)), (1924026063230714736ULL))) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) (signed char)96)) <= (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_8))))))))));
                    var_16 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)-108)) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) ((7109275973208588786ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)122)) > (var_12)));
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 25U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (var_9))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)8))))) < (((((/* implicit */_Bool) var_3)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))))))))));
}
