/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98916
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */short) var_1)))))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_8))))) : (((((/* implicit */_Bool) 749309102U)) ? (var_11) : (var_0))))) : (max((max((((/* implicit */unsigned long long int) var_7)), (var_11))), (((/* implicit */unsigned long long int) max((var_13), (3545658179U))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (749309102U)))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) var_6))))) : (((var_1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_11)))) ? (((/* implicit */unsigned long long int) max((749309102U), (((/* implicit */unsigned int) 258871089))))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16173))) : (var_0))))) : (min((((/* implicit */unsigned long long int) min((749309102U), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) var_9)) ? (3618149167464930011ULL) : (((/* implicit */unsigned long long int) var_16))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = min((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_3)) : (arr_7 [i_2] [i_1] [i_0])))) ? (max((((/* implicit */long long int) 3545658214U)), (8836709758108285944LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (749309102U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3545658194U)) ? (((/* implicit */int) arr_8 [i_0 - 2] [(_Bool)0] [i_2 - 3] [i_2 - 3])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-23)) : (((/* implicit */int) var_14))))))));
                    arr_9 [(signed char)3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)-32))))), (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) max((((var_1) ? (arr_7 [i_1] [i_0] [i_2]) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_1] [i_0])))), (((/* implicit */int) min((var_8), ((short)-1))))))) : (min((((var_1) ? (var_16) : (749309102U))), (((/* implicit */unsigned int) min(((short)-16173), (((/* implicit */short) (_Bool)1)))))))));
                    arr_10 [i_0] [12] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (short)-27028)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1510621428U)))))), (min((((arr_0 [i_1]) ? (var_9) : (2639018975696369029ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_20 ^= max((((((/* implicit */_Bool) min((((/* implicit */signed char) var_14)), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) : (var_7)))) : (min((var_9), (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */_Bool) ((var_1) ? (749309093U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18)))))) ? (((((/* implicit */_Bool) 4140230063U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))))))));
}
