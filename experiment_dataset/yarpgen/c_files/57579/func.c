/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57579
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
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)65535))), (((/* implicit */unsigned short) min((var_10), (((/* implicit */short) var_3)))))))), (max((max((var_2), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (4091349882270746446LL))))))));
    var_18 -= ((/* implicit */int) min((((/* implicit */unsigned short) (short)17973)), ((unsigned short)35684)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = max((min((max((9798962682308386082ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (-9223372036854775806LL)))))), (max((max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)68)))), (max((((/* implicit */unsigned long long int) var_7)), (1073741823ULL))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((var_5), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) min((var_7), (arr_1 [i_0]))))))), (min((min((var_14), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)212)), ((short)-1))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (1ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)2032)), ((unsigned short)18213)))))), (max((((/* implicit */unsigned long long int) max(((unsigned char)206), (((/* implicit */unsigned char) arr_3 [i_0]))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (8613109678664303687ULL)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((min((5ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [i_0]))))))), (((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */int) (signed char)4)))), (max((-408952745), (((/* implicit */int) var_9)))))))));
    }
}
