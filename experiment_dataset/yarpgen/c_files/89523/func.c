/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89523
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
    var_20 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_18))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17)) + (((/* implicit */int) max(((short)-12), ((short)28198))))))) ? (((/* implicit */int) (unsigned short)32734)) : (-1739213950)));
    var_22 = ((/* implicit */long long int) (~(308329363)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (-1)))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) 10420965270852889278ULL))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)57105)) % (((/* implicit */int) (short)-31904)))) + (((/* implicit */int) (short)28198)))))));
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) var_18);
            var_26 -= ((/* implicit */signed char) ((int) (-((+(arr_6 [i_2]))))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_1] [i_3] [i_3])))) <= (-308329364)));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((((/* implicit */int) arr_10 [i_3] [i_1] [i_1])) & (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (_Bool)1))));
            var_29 *= ((/* implicit */_Bool) arr_5 [i_1]);
        }
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_16))), (((/* implicit */unsigned long long int) arr_7 [8LL] [i_4] [i_4]))))));
            var_31 &= ((((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32757)))) / (-308329376))) * ((((-(308329382))) / (((((/* implicit */_Bool) (unsigned short)62567)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))))));
            arr_14 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (arr_7 [i_1] [i_4] [i_4]) : (arr_7 [i_1] [i_1] [i_1]))))));
        }
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((_Bool) (~(arr_9 [i_1])))))));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-96)) || (((/* implicit */_Bool) 423561486U)))) ? (-308329344) : (-308329339)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) arr_4 [i_1])) : (max((arr_13 [i_1]), (((/* implicit */long long int) var_18)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_9)))))));
        var_34 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_35 = ((/* implicit */short) ((_Bool) (_Bool)1));
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_13 [i_5]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -308329393)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) (short)3523))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (285823094))) : (308329317))) : (max((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_1)) : (-343694333))), (-308329375)))));
        var_37 = ((/* implicit */unsigned long long int) var_0);
    }
    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_7))));
}
