/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94687
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                var_21 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) min(((unsigned char)208), (arr_3 [i_0])))), ((+(((/* implicit */int) arr_2 [i_1])))))), (min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_0 [i_1]))))))));
                var_22 *= ((/* implicit */short) ((arr_1 [i_1 - 1] [i_1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (short)-11858)) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */_Bool) (short)21446)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_0]), ((unsigned short)29743))))))) ? (((/* implicit */int) arr_0 [i_0])) : (min((((/* implicit */int) arr_3 [i_1 - 2])), (((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) arr_2 [(unsigned char)2])) : (((/* implicit */int) arr_2 [i_0]))))))));
                arr_4 [i_1 - 2] [i_1] = (+((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_1 [(short)17] [i_1])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_2 [i_1 - 3])))))));
            }
        } 
    } 
    var_24 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_9 [i_2] [i_3])))))))));
                arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12))))) ? (-729558646) : ((-(((/* implicit */int) arr_2 [i_3]))))))) ? (((((/* implicit */_Bool) arr_6 [22LL])) ? (((arr_10 [i_2]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (unsigned char)186)))) : (((((/* implicit */_Bool) (short)-11837)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_8 [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)14]))) : (3537676520762948645ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)9])) || (arr_9 [17] [17])))) : ((-(((/* implicit */int) arr_6 [i_2]))))))));
                var_26 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)46082))))))) ? (((((/* implicit */_Bool) 1446567878U)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_10 [(_Bool)1])))) : (((/* implicit */int) arr_8 [i_3])));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_5);
}
