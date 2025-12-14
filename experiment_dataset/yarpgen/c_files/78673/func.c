/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78673
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) 2229967487U)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2140041627))))) * (((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) min((((((unsigned long long int) var_15)) >> (((min((7456138647627739487LL), (((/* implicit */long long int) (signed char)86)))) - (75LL))))), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_2 - 1]), (arr_8 [i_2 + 1]))))) ^ (max((max((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14471)) | (((/* implicit */int) (signed char)-17)))))))));
            var_21 |= ((/* implicit */unsigned short) arr_6 [i_1]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 15226112603415072317ULL)) ? (((/* implicit */unsigned long long int) -1776611556)) : (min((((3220631470294479298ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51057))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) 13025061996866108472ULL)))))))));
            var_23 = ((/* implicit */long long int) ((((int) var_14)) * (((/* implicit */int) arr_4 [i_1]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [(unsigned short)6]))) & (max((((/* implicit */unsigned long long int) (unsigned short)56301)), (5421682076843443140ULL)))))));
                    var_25 = ((/* implicit */unsigned int) (~(min((-2790157113860157858LL), (((/* implicit */long long int) 365230452U))))));
                    var_26 = ((((/* implicit */unsigned long long int) ((865048525243033688LL) + (((/* implicit */long long int) arr_1 [i_4]))))) + (arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) var_7);
                                arr_26 [5] [5] [i_5] [i_6] [i_7 - 3] [(signed char)7] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [18U]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_12 [i_6] [i_4] [i_5]))), (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) var_13)) : (var_7)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)51064)), (13025061996866108475ULL)))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((int) 10851049031263601857ULL)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 15930569440681821758ULL)))))))) ? (max((arr_10 [i_7 - 3] [i_6 - 2]), (arr_10 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) 2229967489U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (0U)));
    }
    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_36 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51065))) % (arr_34 [i_8] [i_9] [i_8 + 1])));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) -1760036777)), (3684754364U)))))) ? (min((7U), (((/* implicit */unsigned int) (~(arr_1 [(unsigned short)10])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9234))))))));
                    var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_37 [(unsigned char)10] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_8 - 1]))))) <= (((((/* implicit */unsigned long long int) ((-2140041628) & (((/* implicit */int) (_Bool)0))))) | (max((var_12), (((/* implicit */unsigned long long int) arr_29 [i_8]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 2) 
        {
            for (long long int i_12 = 2; i_12 < 16; i_12 += 2) 
            {
                for (signed char i_13 = 4; i_13 < 15; i_13 += 3) 
                {
                    {
                        arr_45 [i_8] [12ULL] [i_11] [i_12] [i_13] [i_13 + 1] = ((/* implicit */long long int) ((_Bool) max((arr_32 [i_13 - 1] [i_13 - 1]), (((/* implicit */unsigned long long int) arr_28 [i_12])))));
                        var_32 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned long long int) ((int) arr_28 [i_8]))) : (((arr_42 [i_8] [i_11] [i_12] [i_13]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))))))))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-13)) > (((/* implicit */int) (_Bool)1))));
    var_34 = ((/* implicit */unsigned short) ((unsigned int) var_4));
}
