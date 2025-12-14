/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87075
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
    var_16 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : (var_15))), (max((5727062620553172701LL), (5727062620553172691LL))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 4294967295U)) : (var_8)))) ? ((+(var_15))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20)))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)24439)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (unsigned short)65532))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) var_1);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((((/* implicit */_Bool) 5727062620553172714LL)) ? ((-(((/* implicit */int) (unsigned short)63526)))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (unsigned short)10238)))))))))));
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3 - 2] [i_3 - 2] [i_3])) ? (var_8) : (-7LL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)21479)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 909190556686003258LL))))))))) : (((/* implicit */int) (short)16380))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -11LL)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (unsigned short)10239)))) > (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */int) arr_0 [i_0]))))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_1]);
                arr_12 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(818376614848990174ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : ((~(0LL)))));
}
