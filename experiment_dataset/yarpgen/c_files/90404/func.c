/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90404
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
    var_15 = ((/* implicit */int) (((((!(((/* implicit */_Bool) -258400472670112240LL)))) ? (max((258400472670112229LL), (-258400472670112243LL))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62860))) / (-258400472670112229LL))))) != (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((max((((/* implicit */long long int) (_Bool)0)), (-258400472670112231LL))) << (((arr_1 [i_0] [i_0]) - (446517271U))))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */int) (short)23652)) != (((/* implicit */int) (_Bool)1)))))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (-(min((((11799409938252036687ULL) << (((/* implicit */int) var_7)))), (((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))))));
        var_17 -= ((/* implicit */_Bool) 14070372052363574264ULL);
    }
    var_18 = ((/* implicit */unsigned short) (((+(((var_3) ? (-258400472670112230LL) : (((/* implicit */long long int) var_5)))))) * (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-1568)), (var_8)))))))));
    var_19 = ((short) var_11);
}
