/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64568
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)18406)))))));
                var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_2 [i_0] [i_0]) - (937787241)))))) : (((-7171024726376977814LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [3LL] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_2])))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(1654953895))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((((/* implicit */int) ((arr_3 [i_2] [i_2] [i_2]) >= (arr_3 [(signed char)18] [i_2] [i_2])))) ^ (arr_0 [i_2]))))))));
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) 14127313790944798229ULL))))) == (((/* implicit */int) ((arr_2 [i_2] [i_2]) <= (var_5))))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-16893)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((short) arr_3 [i_3] [i_3] [i_3])))))) && (((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (min((((/* implicit */unsigned long long int) -5564222942350648290LL)), (16266033423419315938ULL)))));
    }
}
