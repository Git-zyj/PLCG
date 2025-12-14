/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83440
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
    var_20 = ((/* implicit */_Bool) ((long long int) var_18));
    var_21 &= ((/* implicit */unsigned char) (-(((long long int) var_3))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0 + 1] [i_0]) : (arr_1 [i_0] [i_0]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11813)) ? (-7542608059625480840LL) : (((/* implicit */long long int) 0U)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min(((unsigned short)26217), (((/* implicit */unsigned short) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-82)))))))));
        arr_4 [i_0] = (+(((/* implicit */int) (unsigned short)51911)));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39319))) % (1201197442U)));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 120609322294078524ULL)) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29942)))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) % (arr_10 [i_1 - 2] [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39301))))))));
            arr_11 [i_1] [i_2] = ((/* implicit */int) ((unsigned char) arr_9 [(signed char)6] [i_2] [(signed char)6]));
            var_24 = ((/* implicit */unsigned short) (-(arr_9 [i_1] [i_2] [i_2])));
        }
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(882301109004192869ULL)))) ? (((/* implicit */unsigned long long int) (~(arr_9 [5ULL] [i_3] [i_3])))) : (((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9))))))) ? (((unsigned int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_3])) : (((/* implicit */int) arr_6 [i_1] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_10 [i_1] [i_1]))) ? (((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) var_7)))))));
            arr_15 [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_3]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_18 [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_4])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) var_12)))))) ? (arr_9 [i_1 + 3] [i_1] [i_4]) : (max((((/* implicit */unsigned int) (unsigned short)51911)), (((unsigned int) (unsigned short)36523))))));
            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21320))))) | (arr_9 [(unsigned short)2] [i_4] [i_1])));
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((_Bool) (short)-21657)) || (((/* implicit */_Bool) max((1644209193U), (1415196675U))))));
            var_27 &= ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)1)) << (((arr_20 [i_5] [i_5]) + (3160176729530286562LL))))) << (((arr_13 [i_5] [i_1 + 4]) - (621047649)))))) & (min((((/* implicit */long long int) ((unsigned short) (-2147483647 - 1)))), (((((/* implicit */_Bool) arr_17 [(short)4])) ? (arr_20 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned char)10])))))))));
        }
    }
    for (int i_6 = 2; i_6 < 12; i_6 += 1) 
    {
        var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((17521133928094909528ULL) << (((arr_24 [i_6]) - (9663816021309892619ULL)))))))) ? (((/* implicit */int) max((arr_19 [i_6]), (((/* implicit */unsigned short) ((signed char) (unsigned short)34835)))))) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6]))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)53722))), (((unsigned int) 2467416605U))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) min((((arr_0 [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6]))))), (((((/* implicit */int) arr_17 [i_6])) == (var_3))))))));
    }
}
