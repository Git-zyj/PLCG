/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78756
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_8))) << (((min((var_0), (((/* implicit */long long int) var_8)))) - (52611LL))))))));
        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_0 - 2]), (((/* implicit */short) (_Bool)1))))) > (((/* implicit */int) (_Bool)1))))), (max((arr_0 [i_0 - 3]), (((/* implicit */long long int) var_4))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_0 [i_1]), (arr_0 [i_1])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) (unsigned short)4097))))), (18ULL)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_0 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(signed char)8])), ((unsigned short)55913)))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) min((((((arr_0 [i_1]) == (((/* implicit */long long int) arr_9 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (9006099743113216ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_7 [(unsigned short)10] [i_2] [i_1])))))), (var_5)));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (432458482) : (((/* implicit */int) (short)-1))))) ? (max((((/* implicit */long long int) var_8)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1]))))))) ? (max((min((((/* implicit */long long int) arr_5 [i_1])), (arr_0 [i_1]))), (((/* implicit */long long int) 30938708U)))) : (((((/* implicit */_Bool) arr_4 [(unsigned short)6] [(unsigned short)6])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_2])))))))))));
            arr_11 [i_2] = ((/* implicit */long long int) ((int) ((min((var_5), (((/* implicit */unsigned long long int) arr_1 [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            var_18 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_2] [9U]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        }
        for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_8 [i_3] [i_3 + 2] [i_3 + 3])) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_3 + 3] [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_0))))))))));
            arr_15 [i_1] = ((/* implicit */signed char) var_8);
        }
        var_20 = ((/* implicit */unsigned short) var_3);
    }
}
