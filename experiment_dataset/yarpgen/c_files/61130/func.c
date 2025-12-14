/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61130
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (var_9) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(arr_7 [i_0] [i_1] [(unsigned short)0] [i_0])))))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (0ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))))));
                            var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_2 + 1] [0ULL])), (min((((/* implicit */int) arr_2 [i_2 + 1] [i_2])), (((((/* implicit */_Bool) 4850104681181619395ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [11ULL])), (var_9)))) >> (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) <= (((arr_1 [(_Bool)1]) ? (arr_4 [i_0] [i_1] [i_1]) : (7526370053187646615ULL))))))));
                var_16 = (_Bool)1;
                arr_14 [i_0] [i_0] [i_0] = ((_Bool) min((((/* implicit */unsigned long long int) (!(arr_0 [i_0])))), (((var_5) * (14597389709884888279ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((min((((70931694131085312ULL) % (var_5))), ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (unsigned short)45007))));
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (18375812379578466296ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))))))))));
    var_19 = ((/* implicit */_Bool) var_4);
}
