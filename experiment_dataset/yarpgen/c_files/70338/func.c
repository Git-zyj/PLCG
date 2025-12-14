/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70338
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
    var_16 = ((/* implicit */_Bool) var_10);
    var_17 = ((/* implicit */int) ((_Bool) ((var_1) ? (min((13551334101519156284ULL), (((/* implicit */unsigned long long int) var_4)))) : (min((4895409972190395332ULL), (((/* implicit */unsigned long long int) var_6)))))));
    var_18 ^= ((/* implicit */_Bool) ((((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_15)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) << (min((max((((/* implicit */int) var_12)), (var_11))), (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1695333780) <= (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) max((-1695333791), (-1695333795)))) : (min((((/* implicit */unsigned int) arr_0 [i_0 + 1])), (var_14)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (287440932U)))) : (((((/* implicit */_Bool) -1706460222)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (7505012167550972001LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_1)))))))));
        arr_2 [i_0 + 1] |= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0 - 1])))) < (((/* implicit */int) max((arr_1 [i_0 - 3]), (arr_1 [i_0 - 4]))))));
        var_20 -= ((/* implicit */long long int) var_10);
        var_21 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_3))))) ? ((-(-7505012167550971980LL))) : (((/* implicit */long long int) ((arr_0 [i_0 - 2]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) 1695333778)))));
        var_22 = (-(((((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)14)))) << (((((/* implicit */_Bool) 953781377)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_23 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (3150464027U))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) % (max((((/* implicit */unsigned long long int) 7943994792656260520LL)), (3799871861319870790ULL)))))));
        arr_6 [(unsigned short)1] [(_Bool)1] &= ((/* implicit */short) (-(max((((/* implicit */long long int) max((-1585736658), (((/* implicit */int) arr_1 [i_1]))))), ((~(7505012167550972021LL)))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3150464043U)) ? (((/* implicit */unsigned long long int) -1950549071)) : (3799871861319870790ULL)))))))));
        var_25 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) -7505012167550972002LL))))))), (((/* implicit */int) (signed char)-77))));
        var_26 = ((/* implicit */short) min((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_0 [16LL])))) ^ ((+(((/* implicit */int) var_9))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -1695333780)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (short)16168))))), (7505012167550971985LL)))));
    }
    var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) : (min((var_2), (((/* implicit */unsigned int) (unsigned short)25774))))))));
}
