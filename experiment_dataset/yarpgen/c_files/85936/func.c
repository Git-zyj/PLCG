/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85936
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
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((((/* implicit */int) (unsigned short)10340)) > (((/* implicit */int) (unsigned short)43715)))) ? (min((((/* implicit */unsigned int) (unsigned short)0)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9ULL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [2U] [i_0]))) * (arr_1 [i_0])))))) ? (((((arr_0 [i_0]) - (arr_0 [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [3U] [6ULL])) * (((/* implicit */int) (unsigned char)37))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))) : (((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36965)))))))));
        var_19 = ((/* implicit */long long int) ((((_Bool) 857007052)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [1ULL]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) ((_Bool) (short)-28784))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */int) (short)14459)) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((unsigned short)7), ((unsigned short)7))))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-114)), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (245760U))))))))));
        var_21 *= ((((10U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) > (((long long int) arr_0 [(unsigned short)2])))))) : (((((((/* implicit */_Bool) arr_1 [6U])) ? (arr_0 [i_0]) : (944701369U))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)38), (((/* implicit */signed char) (_Bool)1)))))))));
    }
}
