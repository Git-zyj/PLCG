/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68178
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_13 *= ((/* implicit */unsigned int) (~(arr_0 [i_0])));
            var_14 = ((/* implicit */unsigned char) ((unsigned int) (~(var_11))));
            var_15 -= ((/* implicit */int) var_5);
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2 + 1]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) ((arr_6 [i_2 - 2] [i_2 - 2]) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_6 [i_2 - 2] [13ULL]))))) : (arr_7 [i_0] [i_0])));
            var_17 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1))))));
        }
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_18 *= ((/* implicit */short) var_2);
            var_19 *= ((/* implicit */unsigned int) var_12);
        }
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
        {
            var_20 &= ((/* implicit */_Bool) var_3);
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_5 [i_5 - 1])))) ? (max((arr_5 [i_5 + 1]), (arr_5 [i_5 + 2]))) : (((((/* implicit */unsigned long long int) 935988535)) ^ (13985193469072461284ULL)))));
                        var_22 -= ((/* implicit */unsigned char) var_12);
                        var_23 = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) 17687454939725742744ULL)))))));
        }
        /* LoopNest 3 */
        for (short i_7 = 4; i_7 < 11; i_7 += 4) 
        {
            for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (min((arr_12 [i_8] [i_7] [13]), (((/* implicit */unsigned int) arr_13 [i_8 - 1] [i_7] [i_7]))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_7 [i_0] [i_7]), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))) * (var_11)))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7 + 4] [i_7 + 4] [i_7 + 2] [i_7 - 2])))));
                        arr_29 [i_7] = ((/* implicit */short) max((min(((~(4461550604637090331ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0] [13LL] [i_8 + 1])))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_7)))) != (((/* implicit */int) var_4)))))));
                        var_27 |= ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) min((((/* implicit */int) min((var_9), (arr_27 [i_0] [i_0] [i_0])))), (((int) arr_12 [i_0] [i_0] [i_0]))));
        var_29 = ((/* implicit */short) max((var_5), ((!(((/* implicit */_Bool) var_3))))));
        arr_30 [i_0] = (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5768))))) : ((((_Bool)1) ? (3490626006U) : (((/* implicit */unsigned int) 935988535)))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) var_6);
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) arr_31 [i_10 + 2])) ? (13985193469072461284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) arr_31 [i_10 + 1]))))))))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) ((((var_4) && (((/* implicit */_Bool) arr_31 [i_11 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_32 [i_11 - 1]) == (max((((/* implicit */unsigned int) arr_34 [6U] [6U])), (var_0))))))) : (((((/* implicit */_Bool) arr_33 [i_11 + 1] [i_11 + 1])) ? (((arr_32 [i_11]) >> (((/* implicit */int) arr_34 [i_11] [i_11 + 2])))) : (arr_33 [i_11] [i_11])))));
        var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11 - 2])))))) != ((+(13985193469072461302ULL)))));
    }
    var_34 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10))))))), (((((unsigned long long int) var_7)) - (((/* implicit */unsigned long long int) var_6))))));
    var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(-935988536)))))))) * (max((((unsigned int) var_4)), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
}
