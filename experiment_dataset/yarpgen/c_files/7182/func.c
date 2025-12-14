/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7182
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) (((-(((/* implicit */int) arr_1 [i_0])))) - ((-(((/* implicit */int) (unsigned char)211)))))));
        var_17 += ((/* implicit */_Bool) min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (3579005147747728611LL) : (3579005147747728611LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)6)), ((unsigned short)21406)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)192);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)52190)) <= (((/* implicit */int) (unsigned char)192)))))) == (((((/* implicit */_Bool) (unsigned short)33836)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (-6828515164637995387LL))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))) + ((+(arr_5 [i_1] [i_1])))));
    }
    var_21 &= ((/* implicit */signed char) (((((+(3579005147747728611LL))) < (130166245841867626LL))) ? (((((/* implicit */_Bool) ((int) 18446744073709551614ULL))) ? (((((/* implicit */unsigned long long int) var_2)) / (8390013511956474831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52190))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned short)13332)), (-1470220740))) / ((+(2147483647))))))));
}
