/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99424
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
    var_11 = ((/* implicit */signed char) ((short) ((((14416704085342534959ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)161))))) : (max((((/* implicit */int) var_2)), (-2))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 4030039988367016653ULL))) ? (var_1) : (((((((/* implicit */int) (signed char)64)) <= (((/* implicit */int) var_8)))) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_3 [i_1])) + (40))))) : (max((arr_1 [i_0] [i_1]), (((/* implicit */int) (signed char)90)))))))))));
                    var_13 *= ((/* implicit */int) ((((((/* implicit */_Bool) 14416704085342534972ULL)) ? (14416704085342534980ULL) : (((/* implicit */unsigned long long int) -1278555305)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) -2147483645)) && (((/* implicit */_Bool) var_4))))), (((short) (unsigned char)255))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_7);
}
