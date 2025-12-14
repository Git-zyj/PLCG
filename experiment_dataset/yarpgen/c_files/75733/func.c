/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75733
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
    var_11 = ((/* implicit */short) var_7);
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) max(((short)28166), (((/* implicit */short) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-8688234910656877595LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (var_0)))));
    var_13 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)162)), (15726876084198681914ULL)));
            var_15 = ((/* implicit */short) (unsigned char)129);
        }
        var_16 += ((/* implicit */signed char) min((((/* implicit */int) ((short) arr_1 [i_0]))), ((+(((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) ((short) (~((+(((/* implicit */int) var_7)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */short) ((signed char) (signed char)-90));
                var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)141))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)63295))))), ((~(15726876084198681919ULL)))))) ? ((+(((/* implicit */int) min(((unsigned char)177), (((/* implicit */unsigned char) (signed char)-66))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2 - 2]))))))));
                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((signed char) (unsigned char)140))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) (unsigned short)5514))))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21404)))))))));
            }
        } 
    } 
}
