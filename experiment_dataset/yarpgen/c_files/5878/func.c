/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5878
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) >> (((((/* implicit */int) arr_6 [i_0])) - (163))))))))) + (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_1))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (var_3)))))))));
                    arr_12 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((arr_5 [i_1] [i_1] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_7 [i_0] [i_1]))))))))) <= (((/* implicit */int) ((((var_0) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((/* implicit */int) ((var_7) || (((/* implicit */_Bool) (short)-32753)))))))))));
                    var_17 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7)))))) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) & (-604764870609192928LL)))))) >= (((((((/* implicit */int) arr_10 [i_1] [i_1])) & (((/* implicit */int) arr_8 [i_1])))) << (((((((/* implicit */int) (signed char)93)) << (((((/* implicit */int) (signed char)-27)) + (32))))) - (2976))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_1))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_15))))))) <= (((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_12))))) ^ (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)116)) != (((/* implicit */int) var_6))))) != (((((/* implicit */int) var_5)) / (((/* implicit */int) var_2))))))) < (((((/* implicit */int) ((((/* implicit */int) (unsigned char)142)) >= (((/* implicit */int) var_8))))) | (((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))))))));
    var_20 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_0))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)(-32767 - 1)))))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_1))))) <= (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_10)))))))))));
    var_21 = ((/* implicit */long long int) ((((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned char)134)) - (103))))) & (((/* implicit */int) ((-1) == (((/* implicit */int) (_Bool)1))))))) ^ (((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)21189))))) / (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_8))))))));
}
