/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59802
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
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (12871891728206605952ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)13044)), (4051180543274234119ULL)))) ? (4974355252282279664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7537709680831025108ULL)) ? (((/* implicit */int) arr_3 [6ULL])) : (((/* implicit */int) (_Bool)1)))))))))));
                    var_19 += min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (14267687806407403548ULL) : (7203007747194679503ULL)))) ? (1879524972069594194ULL) : (((unsigned long long int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_20 = (unsigned short)714;
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_7), (((/* implicit */unsigned long long int) (unsigned short)37155)))), (((((/* implicit */_Bool) var_11)) ? (0ULL) : (9223372036854773760ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37160)) ? (4179056267302148067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (min((((/* implicit */unsigned long long int) (unsigned short)37661)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37160)))));
}
