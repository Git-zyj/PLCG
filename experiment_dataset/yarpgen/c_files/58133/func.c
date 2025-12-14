/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58133
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
    var_11 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_6))))) ? (((1284646407) / (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((short)6014), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)2896)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (2146585244523464608ULL))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_7))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (0LL))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) >= (((((/* implicit */_Bool) ((int) var_2))) ? (((var_2) * (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-111)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_14 += ((/* implicit */_Bool) var_8);
        arr_9 [i_2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) (+(var_3)))) % (3459486132U))));
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)152)), (2146585244523464608ULL)));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_16 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_8))))) < (((unsigned int) (_Bool)0))))), ((((!(((/* implicit */_Bool) -2147483634)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) != (((/* implicit */int) var_6)))))) : (835481167U)))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) var_10);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (~(var_2)));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(3459486132U)))) ? ((-(773453181U))) : (4294967276U))) : (((/* implicit */unsigned int) max((((arr_2 [i_4]) / (((/* implicit */int) (short)12936)))), (((/* implicit */int) var_0)))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((3459486132U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4])))))) == (16300158829186087026ULL)))) * (((/* implicit */int) ((((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */short) var_0);
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */_Bool) var_2);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))))) == (min((var_5), ((~(var_3)))))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) arr_10 [i_5] [i_5]))))) : (min((8394300393952212179LL), (((/* implicit */long long int) var_1))))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_2)) : (-2151326235275982341LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1417851538)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_16 [i_5])))))) : ((+(1914276693U))))))));
    }
    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) (+(var_10)))));
}
