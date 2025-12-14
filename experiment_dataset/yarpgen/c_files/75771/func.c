/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75771
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
    var_10 = ((unsigned char) (-(((((/* implicit */_Bool) -27)) ? (4630701798340297685ULL) : (var_8)))));
    var_11 = ((/* implicit */int) max((var_4), (((/* implicit */long long int) ((((((/* implicit */_Bool) 13816042275369253931ULL)) && (((/* implicit */_Bool) 9007602890414473645ULL)))) ? (((((/* implicit */_Bool) 17489293579547613978ULL)) ? (((/* implicit */int) (unsigned short)63739)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) 13816042275369253942ULL))))))));
    var_12 = ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (24)))) && (((/* implicit */_Bool) var_2)));
    var_13 = ((/* implicit */short) ((_Bool) -2147483630));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((13816042275369253939ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 13872573930876070364ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)5005)))))) : (((13872573930876070364ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13872573930876070371ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56319))) : (10059030951032116072ULL)))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (14339922827287380397ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((((/* implicit */_Bool) ((unsigned short) (short)-1))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))));
                arr_7 [i_0] [i_1] [9LL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [(unsigned short)9] [i_1])), (((((/* implicit */int) (unsigned short)65525)) & (((/* implicit */int) (_Bool)1))))))), (min((max((((/* implicit */unsigned long long int) (short)-2)), (4574170142833481252ULL))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
            }
        } 
    } 
}
