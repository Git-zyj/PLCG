/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63091
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((var_2) * (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((arr_2 [5U]) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (arr_0 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_1 [i_0])))))))));
        var_16 += ((/* implicit */signed char) min((((((((/* implicit */int) var_13)) > (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((var_2) % (((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) var_11)), (arr_2 [(unsigned short)9]))))), (min((((((/* implicit */_Bool) 1772993880U)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 += ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_19 += ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) var_11)), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) ((-1796297859) >= (1796297858)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) >> (((var_1) - (9989106221711840488ULL)))))) ? (((/* implicit */int) (!(var_10)))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))))))));
        var_20 ^= ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (short)-31342)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) (signed char)98));
        arr_7 [i_1] [i_1] = min(((-(arr_4 [i_1 - 1]))), (((/* implicit */unsigned long long int) min(((signed char)48), ((signed char)-38)))));
    }
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) arr_1 [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [(unsigned short)11] [(unsigned short)11] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2 - 1]) >= (arr_4 [i_2 + 2]))))) >= (min((arr_4 [i_2 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_2 + 1])))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_4 - 3]))))) ? (((((/* implicit */_Bool) 15165745530313635641ULL)) ? (arr_2 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((_Bool) var_11)), ((!(((/* implicit */_Bool) var_8))))))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) 16313484490588211517ULL)))), ((!(((/* implicit */_Bool) var_6))))))) * (((/* implicit */int) arr_14 [i_2 + 2] [i_4 - 3] [i_4] [i_4]))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])) & (((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))) << ((((((~(var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_2])))))) - (8457637851997711118ULL)))));
    }
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((2133259583121340099ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) && (((/* implicit */_Bool) var_15)))))))) && (var_10)));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_14 [(signed char)2] [i_5] [(signed char)2] [i_5])) > (((/* implicit */int) var_9)))))))) || (arr_1 [(unsigned char)13]))))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_28 += (!(((/* implicit */_Bool) max((min((((/* implicit */int) var_11)), (var_2))), (((/* implicit */int) arr_19 [i_5 + 2]))))));
            var_29 = ((/* implicit */signed char) ((2374094929U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_6])))));
            var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_5 + 2])) != (((/* implicit */int) arr_8 [i_5 + 1]))))), (min((arr_8 [i_5 + 1]), (arr_8 [i_5 + 1])))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [14U])) ? (((/* implicit */int) arr_8 [i_5])) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) min((arr_16 [i_5] [i_6]), (var_0)))) : (((((/* implicit */int) arr_8 [i_5])) + (var_3)))))));
            var_32 = max((min(((-(var_15))), (((/* implicit */unsigned long long int) ((var_3) / (arr_20 [i_5] [i_5])))))), (min((((841009480950365809ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)0] [(short)0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_9 [i_5]))))))));
        }
        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_33 ^= ((/* implicit */unsigned int) arr_18 [i_5] [i_5 - 1]);
            var_34 ^= ((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_5] [(_Bool)1])), ((-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_8))))))));
            var_35 = ((/* implicit */short) min((((unsigned int) ((((/* implicit */_Bool) var_12)) ? (1796297858) : (((/* implicit */int) var_12))))), (((/* implicit */unsigned int) (unsigned short)28654))));
            var_36 = ((/* implicit */_Bool) arr_10 [i_7]);
        }
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_37 [i_10] [i_8] = ((/* implicit */unsigned short) (~(max((((unsigned long long int) arr_28 [i_8])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_9 - 2] [i_10])) ? (((/* implicit */long long int) -1796297858)) : (arr_33 [i_8] [i_9] [i_9] [i_10]))))))));
                    var_37 = ((/* implicit */unsigned short) var_15);
                    var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
}
