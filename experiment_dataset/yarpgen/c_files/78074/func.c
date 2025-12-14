/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78074
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((arr_2 [i_0 - 1] [i_1 + 1]) != (arr_2 [i_0 + 1] [i_1 - 2]))))));
            var_20 = 1180606910804189535LL;
            var_21 = ((/* implicit */long long int) ((unsigned char) 3415085596086929909ULL));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)4))));
            var_22 |= ((/* implicit */int) (_Bool)1);
        }
        for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_0 + 1] [2ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2])) ? (arr_6 [i_2]) : (8162823084477818845LL)));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1]))));
        }
        var_24 = ((/* implicit */unsigned short) 3161453085U);
    }
    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max((((unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3 + 1])) ? (arr_6 [i_3]) : (((/* implicit */long long int) 2938050164U))))), (((/* implicit */unsigned int) ((int) ((9377982577667554773ULL) << (((arr_2 [i_3] [i_3]) + (2100496467))))))))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) min((arr_9 [i_3 - 1]), (arr_9 [i_3 - 2])))) : ((-(((/* implicit */int) (signed char)57)))))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(382746111))))));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 192218544306506127ULL)) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_9)))))) : (((/* implicit */int) var_6))));
}
