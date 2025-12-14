/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56022
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) (unsigned char)210)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))))))))));
    var_19 |= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-60))))) : (((4251051683U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))))))));
    var_20 = ((/* implicit */_Bool) ((unsigned char) 13166623944779147631ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (4306424661101222044LL)))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-3904)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((((/* implicit */_Bool) 3254064019U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) : (2708038388U)))) : (-3003543841855170457LL)))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_1 - 2] [i_0])))))))));
                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (((/* implicit */int) var_4))))) ? (772736053U) : (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (short)1789)) : (1183318653)))))) / (((unsigned int) arr_1 [i_1 + 1] [i_1]))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_15)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1]))))) : (((((/* implicit */_Bool) 15920005029522924020ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((unsigned int) var_15))) : (((((/* implicit */_Bool) (-(2255281419U)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_17)))))))))));
                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) -1LL))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (-1628305747) : (((/* implicit */int) var_11)))) : (arr_0 [i_1 - 1] [i_1 - 2]))) == ((-(((/* implicit */int) ((unsigned short) (unsigned char)6)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)29))) && (((/* implicit */_Bool) ((var_5) ? (arr_2 [i_3]) : (((/* implicit */long long int) var_13))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1331352530U)) ? (12877550441382937091ULL) : (15005804950176136841ULL)));
            }
        } 
    } 
}
