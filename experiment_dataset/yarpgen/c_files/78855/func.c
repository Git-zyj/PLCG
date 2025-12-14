/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78855
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)22707)) : ((-(((/* implicit */int) var_16))))));
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (short)-12564)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22727)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((~(((/* implicit */int) var_19)))) : (var_5));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) 9051878945188779115ULL))));
        var_25 = ((/* implicit */_Bool) (~(min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)4732))))))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)196)), ((short)6571)))), ((-(((/* implicit */int) (short)1))))))) ? (2147483647) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9394865128520772508ULL)) ? (1218594575) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-4712)) : (((/* implicit */int) (short)26085))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-19547)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))));
                arr_9 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (9394865128520772508ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (var_15)));
            }
        } 
    } 
}
