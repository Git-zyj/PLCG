/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66004
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
    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (14361380266314115216ULL)))) ? (((var_8) / (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */signed char) (_Bool)1)))))));
    var_12 = ((/* implicit */unsigned char) min((-766737031), (min(((-2147483647 - 1)), (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_5)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_14 = (~(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) / (arr_1 [i_1])))), (max((((/* implicit */unsigned long long int) (unsigned short)31)), (15714203618446942668ULL))))));
                var_15 = ((/* implicit */unsigned int) ((((_Bool) ((arr_3 [i_1] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [12U] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) 4085363807395436406ULL)) ? (65535) : (((/* implicit */int) (unsigned short)34995)))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_6)), (var_7))) == ((+(var_7))))))));
                var_16 ^= ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))))), ((~(arr_3 [i_1] [(short)2])))))));
            }
            arr_7 [(unsigned char)10] [(unsigned char)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(8417861522388777036LL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_17 *= var_5;
                arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27958)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */unsigned long long int) ((901700437U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-4)))))))) * (((/* implicit */unsigned long long int) (~(var_3))))));
                arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (var_1)));
                var_18 += ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((unsigned short)20842), ((unsigned short)53368)))), (arr_3 [i_3] [i_1])));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (+(4294967295U)))), (((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) -8417861522388777037LL)))))) > (((/* implicit */unsigned long long int) -65534))));
            arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (arr_3 [i_0] [i_0])))) ? (14361380266314115216ULL) : (((/* implicit */unsigned long long int) var_4))));
            var_19 -= ((/* implicit */signed char) ((_Bool) max((min((12662911459532986468ULL), (((/* implicit */unsigned long long int) (unsigned short)37577)))), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)37577))))));
            arr_19 [i_4] [i_4] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) (unsigned short)11812)), (4342233357648230934ULL)))));
            arr_20 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((max((arr_5 [i_0] [7ULL] [i_4] [i_4]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) arr_15 [i_4]))))), (min((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])), (arr_10 [(unsigned short)8] [i_4] [(unsigned short)8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])))))))));
        }
        var_20 += ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (signed char)9)), (17203502157305588925ULL)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((((/* implicit */_Bool) max(((unsigned short)27958), ((unsigned short)34995)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(signed char)16] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 640264134)), (5ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-21270))) : (min((15127177790935570217ULL), (((/* implicit */unsigned long long int) arr_16 [i_0])))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_6 [i_0] [18LL] [i_0])))))))))));
        arr_21 [i_0] = ((/* implicit */_Bool) var_8);
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!((_Bool)1)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65527)))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12904)) ? (((/* implicit */int) (short)30373)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((signed char)-17), ((signed char)1)))) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (signed char)29)))))));
    }
    var_24 = max(((+(min((((/* implicit */unsigned long long int) var_0)), (var_7))))), (max((((/* implicit */unsigned long long int) (signed char)2)), ((~(0ULL))))));
}
