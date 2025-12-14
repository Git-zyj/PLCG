/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89359
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
    var_14 |= var_7;
    var_15 = (+(max((-1249252064), (((/* implicit */int) (signed char)-124)))));
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned long long int) (~(var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] [10LL] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? ((+(arr_2 [(signed char)2]))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1]))))) != (((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_1 [i_0]))))))));
                arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) (((+(arr_1 [i_1]))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)101)), (var_6))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), ((-(arr_2 [(unsigned char)14])))))) : ((+((~(arr_5 [i_1]))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) (unsigned char)235))), ((((_Bool)1) ? (-2116782994) : (((/* implicit */int) (unsigned char)101)))))))));
            }
        } 
    } 
}
