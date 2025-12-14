/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61865
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_20 -= ((signed char) (_Bool)0);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((-(((/* implicit */int) ((signed char) (_Bool)1))))), (((((/* implicit */int) ((unsigned char) (unsigned char)86))) / ((+(((/* implicit */int) (signed char)53)))))))))));
                        var_22 += ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                    }
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-((+(((/* implicit */int) arr_0 [i_0] [i_2]))))))), (min((min((var_0), (((/* implicit */long long int) (signed char)-32)))), (((/* implicit */long long int) ((_Bool) (signed char)125)))))));
                    var_24 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)35869)) <= ((+(((/* implicit */int) ((arr_3 [i_2] [i_1] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))))))))));
                    var_25 -= ((/* implicit */unsigned short) (~(var_2)));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-62)))) ? (((/* implicit */int) ((var_4) != (var_2)))) : (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_8))))))))));
}
