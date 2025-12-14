/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55708
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 234881024U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (4060086274U)))));
                var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)11414)) && (arr_4 [i_0 - 2] [i_1]))) ? (((arr_4 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)6]))) : (-6532122484333903413LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (2024789746U)))))) ^ (((/* implicit */long long int) (((+(164375172))) / (((/* implicit */int) var_11)))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 - 1] [i_0 + 1]);
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((((/* implicit */int) arr_0 [i_1])) >> (((-164375173) + (164375190))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)89)) * (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_13)) - (99))))) : (((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-21482))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21461)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43138))) : (805614471800194849LL)));
    var_21 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)56), (var_10))))) <= (((((/* implicit */long long int) 980617205U)) % (6532122484333903405LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-15473), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) : (max((var_3), (933382726U)))))) : ((+(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9192840924293339337LL)))))));
    var_22 = ((/* implicit */unsigned char) var_8);
}
