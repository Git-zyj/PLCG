/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62794
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
    var_18 = ((/* implicit */long long int) var_17);
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 985772750U)))) - (min((3136664680U), (985772750U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 985772766U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11))) <= (((unsigned long long int) var_9)))))) : (var_15));
        arr_3 [i_0] = ((/* implicit */_Bool) var_7);
        var_19 = (+(((((316683550U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << (((var_13) - (10023301507183331403ULL))))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((985772766U), (((/* implicit */unsigned int) (unsigned char)8))));
        arr_8 [(_Bool)1] [i_1 + 1] = ((/* implicit */short) ((unsigned int) min((((/* implicit */short) (unsigned char)35)), ((short)5524))));
        arr_9 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5500)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) : (var_14)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_10 [i_2]), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_17)), (var_8)))) : (((((/* implicit */_Bool) 2940422758U)) ? (var_1) : (4227982015U))))), (((((/* implicit */_Bool) (((_Bool)1) ? (4611686018426339328ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (-1233751621))))) : ((+(var_15)))))));
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)62))) ? (((((/* implicit */_Bool) 4276688968U)) ? (6ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2])))) : (((/* implicit */unsigned long long int) ((((arr_5 [17LL]) + (9223372036854775807LL))) << (((var_11) - (17466874078223826629ULL))))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))))), (((/* implicit */unsigned int) arr_10 [i_2])))) : (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)5524))) <= (-5996241495517877762LL))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (763199230))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [2])) == (((/* implicit */int) var_10))))))))));
    }
    for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
    {
        arr_15 [i_3] = 4136631628U;
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_18 [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned char)1)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_3 - 1]))) ^ (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))));
            arr_19 [i_3] = ((/* implicit */long long int) ((int) var_1));
        }
    }
}
