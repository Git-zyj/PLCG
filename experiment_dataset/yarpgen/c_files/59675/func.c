/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59675
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((arr_6 [i_0] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)145)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)145))))) >= (((((/* implicit */_Bool) 15381114983257788260ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (var_11))))))))))));
                    var_17 = ((/* implicit */_Bool) (unsigned char)110);
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2238196913U)) ? (-354201660) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (unsigned char)17))))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) (-(max((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))))), (((/* implicit */unsigned long long int) max(((short)30034), (((/* implicit */short) (unsigned char)110)))))))));
    var_19 = ((/* implicit */long long int) var_7);
}
