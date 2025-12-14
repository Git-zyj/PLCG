/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91808
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
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [1LL] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_3)) ? (146508042) : (800493186))) ^ (((/* implicit */int) ((var_7) || (var_7)))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (signed char)127))))));
        var_16 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)35))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [(_Bool)1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36)))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 += ((/* implicit */_Bool) (((((+(3838928354U))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) var_6)) : (((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_3)))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_11))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18818)) ? (784943576U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) >= ((((_Bool)0) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : (((/* implicit */int) (signed char)-36))));
        var_20 &= ((/* implicit */unsigned short) ((((arr_0 [i_1]) / (arr_0 [i_1]))) % (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_13)) == (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_9 [i_3]))))) : (((((/* implicit */int) (unsigned short)5295)) / (((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_2])))))))))))));
                arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -650390155)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? ((-(arr_10 [i_2] [i_3]))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) ^ (var_4)))))) ? (((/* implicit */int) (short)21916)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1326)) ? (((/* implicit */int) arr_11 [i_2 - 3] [i_2 - 3])) : (((/* implicit */int) (unsigned short)58083)))))))));
            }
        } 
    } 
}
